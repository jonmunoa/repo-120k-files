// fichero 8661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8661;

Registro8661 crear_registro8661(int id) {
    Registro8661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
