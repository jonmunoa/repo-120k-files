// fichero 8621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8621;

Registro8621 crear_registro8621(int id) {
    Registro8621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
