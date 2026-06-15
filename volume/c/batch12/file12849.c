// fichero 12849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12849;

Registro12849 crear_registro12849(int id) {
    Registro12849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
