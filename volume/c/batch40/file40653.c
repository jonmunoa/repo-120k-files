// fichero 40653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40653;

Registro40653 crear_registro40653(int id) {
    Registro40653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
