// fichero 12981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12981;

Registro12981 crear_registro12981(int id) {
    Registro12981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
