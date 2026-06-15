// fichero 11985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11985;

Registro11985 crear_registro11985(int id) {
    Registro11985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
