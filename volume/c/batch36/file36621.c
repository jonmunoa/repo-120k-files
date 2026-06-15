// fichero 36621 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36621;

Registro36621 crear_registro36621(int id) {
    Registro36621 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
