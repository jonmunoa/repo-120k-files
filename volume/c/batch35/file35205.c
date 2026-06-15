// fichero 35205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35205;

Registro35205 crear_registro35205(int id) {
    Registro35205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
