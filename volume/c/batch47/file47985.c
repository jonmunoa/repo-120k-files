// fichero 47985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47985;

Registro47985 crear_registro47985(int id) {
    Registro47985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
