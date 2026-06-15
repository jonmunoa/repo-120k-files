// fichero 5265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5265;

Registro5265 crear_registro5265(int id) {
    Registro5265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
