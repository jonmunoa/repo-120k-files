// fichero 9725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9725;

Registro9725 crear_registro9725(int id) {
    Registro9725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
