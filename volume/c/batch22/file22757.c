// fichero 22757 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22757;

Registro22757 crear_registro22757(int id) {
    Registro22757 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
