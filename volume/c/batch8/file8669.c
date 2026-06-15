// fichero 8669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8669;

Registro8669 crear_registro8669(int id) {
    Registro8669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
