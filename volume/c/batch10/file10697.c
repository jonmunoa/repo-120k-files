// fichero 10697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10697;

Registro10697 crear_registro10697(int id) {
    Registro10697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
