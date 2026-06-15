// fichero 6121 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6121;

Registro6121 crear_registro6121(int id) {
    Registro6121 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
