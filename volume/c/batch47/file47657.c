// fichero 47657 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47657;

Registro47657 crear_registro47657(int id) {
    Registro47657 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
