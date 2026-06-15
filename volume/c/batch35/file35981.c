// fichero 35981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35981;

Registro35981 crear_registro35981(int id) {
    Registro35981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
