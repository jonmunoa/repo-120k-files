// fichero 18573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18573;

Registro18573 crear_registro18573(int id) {
    Registro18573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
