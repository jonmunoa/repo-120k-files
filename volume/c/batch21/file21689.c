// fichero 21689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21689;

Registro21689 crear_registro21689(int id) {
    Registro21689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
