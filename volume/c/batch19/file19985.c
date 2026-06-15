// fichero 19985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19985;

Registro19985 crear_registro19985(int id) {
    Registro19985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
