// fichero 41545 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41545;

Registro41545 crear_registro41545(int id) {
    Registro41545 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
