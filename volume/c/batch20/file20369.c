// fichero 20369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20369;

Registro20369 crear_registro20369(int id) {
    Registro20369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
