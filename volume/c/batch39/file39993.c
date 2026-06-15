// fichero 39993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39993;

Registro39993 crear_registro39993(int id) {
    Registro39993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
