// fichero 26697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26697;

Registro26697 crear_registro26697(int id) {
    Registro26697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
