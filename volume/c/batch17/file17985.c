// fichero 17985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17985;

Registro17985 crear_registro17985(int id) {
    Registro17985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
