// fichero 15401 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15401;

Registro15401 crear_registro15401(int id) {
    Registro15401 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15401(Registro15401 r) {
    return r.valor + r.id;
}
