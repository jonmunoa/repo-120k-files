// fichero 2205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2205;

Registro2205 crear_registro2205(int id) {
    Registro2205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
