// fichero 38777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38777;

Registro38777 crear_registro38777(int id) {
    Registro38777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
