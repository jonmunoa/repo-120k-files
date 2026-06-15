// fichero 5913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5913;

Registro5913 crear_registro5913(int id) {
    Registro5913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
