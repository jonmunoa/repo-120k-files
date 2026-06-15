// fichero 19533 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19533;

Registro19533 crear_registro19533(int id) {
    Registro19533 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
