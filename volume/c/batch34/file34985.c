// fichero 34985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34985;

Registro34985 crear_registro34985(int id) {
    Registro34985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
