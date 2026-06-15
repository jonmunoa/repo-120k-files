// fichero 8209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8209;

Registro8209 crear_registro8209(int id) {
    Registro8209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
