// fichero 38085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38085;

Registro38085 crear_registro38085(int id) {
    Registro38085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
