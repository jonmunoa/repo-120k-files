// fichero 35985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35985;

Registro35985 crear_registro35985(int id) {
    Registro35985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
