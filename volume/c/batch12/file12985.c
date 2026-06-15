// fichero 12985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12985;

Registro12985 crear_registro12985(int id) {
    Registro12985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
