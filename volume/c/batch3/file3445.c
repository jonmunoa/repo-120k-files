// fichero 3445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3445;

Registro3445 crear_registro3445(int id) {
    Registro3445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
