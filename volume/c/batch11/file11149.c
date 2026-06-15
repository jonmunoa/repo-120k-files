// fichero 11149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11149;

Registro11149 crear_registro11149(int id) {
    Registro11149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
