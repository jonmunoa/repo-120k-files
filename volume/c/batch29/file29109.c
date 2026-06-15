// fichero 29109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29109;

Registro29109 crear_registro29109(int id) {
    Registro29109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
