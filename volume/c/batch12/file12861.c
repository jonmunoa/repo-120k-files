// fichero 12861 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12861;

Registro12861 crear_registro12861(int id) {
    Registro12861 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
