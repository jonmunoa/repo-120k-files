// fichero 19849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19849;

Registro19849 crear_registro19849(int id) {
    Registro19849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
