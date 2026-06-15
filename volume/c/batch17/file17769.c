// fichero 17769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17769;

Registro17769 crear_registro17769(int id) {
    Registro17769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
