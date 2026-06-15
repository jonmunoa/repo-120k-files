// fichero 9689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9689;

Registro9689 crear_registro9689(int id) {
    Registro9689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
