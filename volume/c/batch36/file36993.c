// fichero 36993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36993;

Registro36993 crear_registro36993(int id) {
    Registro36993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
