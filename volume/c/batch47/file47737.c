// fichero 47737 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47737;

Registro47737 crear_registro47737(int id) {
    Registro47737 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
