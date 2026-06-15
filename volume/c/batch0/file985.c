// fichero 985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro985;

Registro985 crear_registro985(int id) {
    Registro985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
