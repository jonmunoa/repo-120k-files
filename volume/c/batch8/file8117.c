// fichero 8117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8117;

Registro8117 crear_registro8117(int id) {
    Registro8117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
