// fichero 8913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8913;

Registro8913 crear_registro8913(int id) {
    Registro8913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
