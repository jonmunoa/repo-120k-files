// fichero 49881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49881;

Registro49881 crear_registro49881(int id) {
    Registro49881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
