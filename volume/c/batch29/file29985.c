// fichero 29985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29985;

Registro29985 crear_registro29985(int id) {
    Registro29985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
