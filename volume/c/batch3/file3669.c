// fichero 3669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3669;

Registro3669 crear_registro3669(int id) {
    Registro3669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
