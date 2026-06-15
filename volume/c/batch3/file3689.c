// fichero 3689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3689;

Registro3689 crear_registro3689(int id) {
    Registro3689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
