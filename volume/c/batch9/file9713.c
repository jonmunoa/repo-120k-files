// fichero 9713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9713;

Registro9713 crear_registro9713(int id) {
    Registro9713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
