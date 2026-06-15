// fichero 9585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9585;

Registro9585 crear_registro9585(int id) {
    Registro9585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
