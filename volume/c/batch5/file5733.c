// fichero 5733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5733;

Registro5733 crear_registro5733(int id) {
    Registro5733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
