// fichero 3753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3753;

Registro3753 crear_registro3753(int id) {
    Registro3753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
