// fichero 11201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11201;

Registro11201 crear_registro11201(int id) {
    Registro11201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
